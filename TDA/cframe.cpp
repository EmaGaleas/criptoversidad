#include "cframe.h"
#include "ui_cframe.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
    ui->TW_MOSTRAR->setColumnCount(3);
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() << "Ingreso" << "Cifrado" << "Descifrado");
    ui->TW_MOSTRAR->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->frameC2->setEnabled(false);
}

cframe::~cframe()
{
    delete ui;
}


//codigo cifrado

void cframe::on_rb_cifrar_clicked()
{
    ui->frameC2->setEnabled(true);
    ui->frameC1->setEnabled(false);

}


void cframe::on_rb_descifrar_clicked()
{
    ui->frameC2->setEnabled(true);
    ui->frameC1->setEnabled(false);

}

long cframe::encrypt(long message) {
    return Modular(message, 11413, 3533);
}
long cframe::decrypt(long cipher) {
    return Modular(cipher, 11413, 6597);
}
QString cframe::encryptText(const QString& input) {
    QString result;
    for (QChar ch : input) {
        int asciiValue = ch.unicode();
        int encryptedValue = encrypt(asciiValue);
        result += QString::number(encryptedValue) + " ";
    }
    return result.trimmed();
}

QString cframe::decryptText(const QString& input) {
    QStringList encryptedValues = input.split(" ");
    QString decryptedText;
    for (const QString& value : encryptedValues) {
        int encryptedValue = value.toInt();
        int decryptedValue = decrypt(encryptedValue);
        decryptedText += QChar(decryptedValue);
    }
    return decryptedText;
}
void cframe::on_pushButton_clicked()
{
    if(ui->le_frase->text().isEmpty()){
        QMessageBox::warning(this, "NO funca", "No deje campos vacios");
        return;
    }
    QString frase = ui->le_frase->text();
    int row = ui->TW_MOSTRAR->rowCount();
    ui->TW_MOSTRAR->insertRow(row);

    if(ui->rb_cifrar->isChecked()){
        QString encrypted = encryptText(frase);
        ui->TW_MOSTRAR->setItem(row, 0, new QTableWidgetItem(frase));
        ui->TW_MOSTRAR->setItem(row, 1, new QTableWidgetItem(encrypted));
        ui->TW_MOSTRAR->setItem(row, 2, new QTableWidgetItem(""));
    } else if(ui->rb_descifrar->isChecked()){
        QString decrypted = decryptText(frase);
        ui->TW_MOSTRAR->setItem(row, 0, new QTableWidgetItem(frase));
        ui->TW_MOSTRAR->setItem(row, 1, new QTableWidgetItem(""));
        ui->TW_MOSTRAR->setItem(row, 2, new QTableWidgetItem(decrypted));
    }

    ui->le_frase->clear();
    ui->frameC2->setEnabled(false);
    ui->frameC1->setEnabled(true);
}


vector<long *> cframe::de2bi(long x){

    vector <long*> b;
    long mod=0;
    while(x>0){
        mod= x%2;
        b.push_back(new long(mod));
        x=x/2;

    }
    return b;
}


long cframe::Modular(long b, long N, long n){
    long a=1;
    b=b%N;
    vector<long*>d=de2bi(n);
    for(long j=0;j<d.size();j++){
        if(*d[j]==1){
            a=(a*b)%N;
        }
        b=b*b;
        b=b%N;
    }
    return a%N;

}

void cframe::insertarABC()
{
    criptoABC.InsertarFin(' ');
    criptoABC.InsertarFin('!');
    criptoABC.InsertarFin('"');
    criptoABC.InsertarFin('#');
    criptoABC.InsertarFin('$');
    criptoABC.InsertarFin('%');
    criptoABC.InsertarFin('&');
    criptoABC.InsertarFin('\'');
    criptoABC.InsertarFin('(');
    criptoABC.InsertarFin(')');
    criptoABC.InsertarFin('*');
    criptoABC.InsertarFin('+');
    criptoABC.InsertarFin(',');
    criptoABC.InsertarFin('-');
    criptoABC.InsertarFin('.');
    criptoABC.InsertarFin('/');

    for (int i=0;i<10 ;i++ ) {
        criptoABC.InsertarFin('0'+i);
    }
    criptoABC.InsertarFin(':');
    criptoABC.InsertarFin(';');
    criptoABC.InsertarFin('<');
    criptoABC.InsertarFin('=');
    criptoABC.InsertarFin('>');
    criptoABC.InsertarFin('?');
    criptoABC.InsertarFin('@');

    for (int i=0;i<25 ;i++ ) {
        criptoABC.InsertarFin('A'+i);
    }
    criptoABC.InsertarFin('[');
    criptoABC.InsertarFin('\\');
    criptoABC.InsertarFin(']');
    criptoABC.InsertarFin('^');
    criptoABC.InsertarFin('_');
    criptoABC.InsertarFin('`');

    for (int i=0;i<25 ;i++ ) {
        criptoABC.InsertarFin('a'+i);
    }
    for (int i = 127; i <= 165; i++) {
        criptoABC.InsertarFin((char)i);
    }

}
void cframe::insertarINT(){
    for (int i=32;i<166;i++){
        criptoINT.InsertarFin(i);
    }

}

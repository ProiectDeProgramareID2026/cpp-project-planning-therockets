//
// Created by razva on 5/26/2026.
//

#include "../include/Account.h"

#include <string>

Account::Account(weak_ptr<Client> owner, string IBAN, string currency, double balance)
    : Entity(){
    this->owner = owner;
    this->IBAN = IBAN;
    this-> currency = currency;
    this->balance = balance;
}

weak_ptr<Client> Account::getOwner() const {return owner;}
string Account::getIBAN() const {return IBAN;}
double Account::getBalance() const {return balance;}
string Account::getCurrency() const {return currency;}

void Account::addFunds(double ammount){
    balance += ammount;
}
void Account::withdrawFunds(double ammount){
    balance -= ammount;
}


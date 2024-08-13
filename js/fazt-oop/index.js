/*const Person = {
    name: "",
    lastName: ""
}*/

/*function Person(name, lastName) {
    "use strict";
    this.name = name
    this.lastName = lastName
}*/


class Person {
    constructor(name, lastName) {
        this.name = name
        this.lastName = lastName
    }

    displayFullName() {
        console.log(`${this.name} ${this.lastName}`)
    }
}
//console.log(Person)

class Programmer extends Person {
    constructor(name, lastName, language) {
        super(name, lastName);
        this.language = language
    }
}

const user2 = new Programmer("Tomas", "Imagination", "C++")
//user2.displayFullName()

class Bank {
    constructor() {
        this.bankName = "American Bank"
        this.bankOwner = "USA Goverment"
    }
}

class BankAccount extends Bank {
    constructor(owner) {
        super();
        this.owner = owner
        this.money = 0
    }

    deposit(amount) {
        this.money += amount
    }

    withdraw(amount) {
        this.money -= amount
    }

    getMoney() {
        return this.money
    }
}
BankAccount.prototype.displayAccount = function() {
    console.log("Bank Name: " + this.bankName)
    console.log("Bank Account Owner: " + this.owner)
    console.log("Bank Avalible Money: " + this.money)
}

const account1 = new BankAccount("Miguel")
account1.deposit(100)
console.log(account1.getMoney())
account1.displayAccount()
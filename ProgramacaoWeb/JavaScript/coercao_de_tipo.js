//Coerção (conversão) de tipos 

//Coerção explicita (manual)

const numero = 10

console.log(numero, typeof numero)

const numeroEmString = String (numero)
console.log(numeroEmString, typeof numeroEmString)

console.log (Number('123456789.78945'))
console.log (parseFloat('123456789.78945'))
console.log (parseInt('123456789.78945'))
console.log (Boolean(1))

 //Coerção implícita (automática)

 console.log (10 + 1)
 console.log ('10' + 1) //vai juntar tudo em string

 console.log ('10' - 1) //funciona, pois não é soma
 console.log ('10' / 1) //funciona, pois não é soma
 console.log ('10' * 1) //funciona, pois não é soma
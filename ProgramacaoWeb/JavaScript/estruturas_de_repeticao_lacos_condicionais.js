

//laço condicional while

const input = require ('readline-sync')

const numeroSorteado = 5;

let numero = Number (input.question ('Qual numero voce escolhe?'))


while (numero !== numeroSorteado){
    console.log ('Voce errou o numero. Tente novamente!')

    numero = Number (input.question ('Qual numero voce escolhe?'))

}
 console.log('Voce acertou!!!')


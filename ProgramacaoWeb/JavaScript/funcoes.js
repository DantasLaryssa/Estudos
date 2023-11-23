//Funções

//Definição da função
function saudacao () {
    console.log ('Olá, seja bem-vindo(a) ao curso de JavaScript!')
}
//String(), Number()etc...
saudacao()

//Como enviar parâmetros nas funções

function saudacao (nome, curso= 'JavaScript') {
console.log (`Olá, ${nome}! Seja bem-vindo(a) ao curso de ${curso}`)
}
    saudacao('Laryssa')

//Retorno da função

function soma (num1, num2){
    return num1 + num2 //depois do return nada se imprime 
}

const resultado = soma (10,20)

console.log(resultado)

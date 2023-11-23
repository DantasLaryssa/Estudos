// Laço numérico for

//
//Acumulador
// Acumulador += 2 vai ser o valor do acumulador + (somado) ao 2 poderia ser - (menos), com ++ vai somar 1
//let acumulador = 0
//For, i de iteração = volta/repetir
//for (let i=0; i < 10; i++) começo de 0, enquanto for menor que 10 repete, vai somando 1 a cada repetição

console.clear()

let nota;
let soma = 0;

for (let i = 1; i <=3; i++) {
    nota = Number(input.question(`Informe a nota ${i} do aluno:`)) //ao utilizar crase pode colocar variavel dentro, colocar ${} para inserir variavel 

    soma = soma + nota
}

console.log(`A média do aluno é ${soma/3}.`)
//Objetos

let pessoa = {
    nome: 'Laryssa',
    idade:22,
}
console.log(pessoa)

//Acessando as partes
console.log(pessoa.nome)
console.log(pessoa.idade)

//Add um valor

pessoa.altura = 1.73

console.log(pessoa)

//Deletar valor

delete pessoa.altura

console.log(pessoa)

//Percorrer objeto

for (let chave in pessoa){
    console.log(chave)
}
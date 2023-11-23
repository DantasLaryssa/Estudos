//Array = colocou colchete [] criou
 let arr = ['Lary', 22, 1.73, true]

 console.log (arr)

 console.log('Primeiro elemento:', arr[0])
 console.log('Primeiro elemento:', arr[1])
 console.log('Primeiro elemento:', arr[2])
 console.log('Primeiro elemento:', arr[3])

 console.log('Tamanho do array:', arr.length)

 //percorrendo array
 for (let i = 0; i <arr.length; i++){
    console.log(arr[i])
 }

 for (let elemento of arr){ //var com varios conteudos, a cada iteração pega 1 elemento (elementos contidos no indice)

 }

 console.clear()

 for (let variavel in arr){ //ve o indice (num)
    console.log(variavel)
 }
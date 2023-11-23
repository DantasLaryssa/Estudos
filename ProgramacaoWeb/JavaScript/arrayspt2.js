//Metodos arrays 
//fatiamento / pegar uma parte

const arr1 = [30, 12, 45, 34, 29]
let arr2 = []

console.log(arr1.slice(0,3))//Fala na onde começa e termina 

console.log ('Antes de adicionar:', arr2)

arr2.push (10, 20, 30)
arr2.push (40)

console.log ('Depois de adicionar:', arr2)
 
let arr3 = []

arr3.push (10, 20, 30)
arr3.push (40)

//pop remover ultimo elemento
arr3.pop ()
console.log('Depois de remover com pop', arr3) //remove o ultimo elemento, ex: 40

//shift remover primeiro elemento

let arr4 = []

arr4.push (15, 25, 35)
arr4.push (45)

arr4.shift ()
console.log('Depois de remover com shift', arr4)

//Concatenando arrays: concat

console.log('arr1', arr1)
console.log('arr2', arr2)
console.log('arr3', arr3)
console.log('arr4', arr4)

console.log(arr1.concat(arr4))




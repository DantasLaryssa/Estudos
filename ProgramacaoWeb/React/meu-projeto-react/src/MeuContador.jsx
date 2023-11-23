import { useState } from "react" 

export default function MeuContador (){

    console.log('renderizando meu contador...')

    const [contador, setContador] = useState()

    function aumentar(){
        setContador(contador + 1)
        
    }
    
    function diminuir(){
        setContador(contador - 1)
        
    }
     
    if (contador> 5 ){
        return (

        )
        <div>
        <h1>Contador maior que 5</h1>
        <button onClick={aumentar}>aumentar</button>
        <button onClick={diminuir}>diminuir</button>
        </div>
    }

    return(
        <div>
            <h1>Meu Contador</h1>
            {contador > 9 ? <h1>Valor muito grande</h1>}:
            null
            <h3>{contador}</h3>

        </div>
    )
}

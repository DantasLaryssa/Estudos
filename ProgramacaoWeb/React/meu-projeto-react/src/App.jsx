import MeuComponente from "./componentes/MeuComponente "

function App() {
 

  return (
    <div>
     <h1>Ola Mundo! React!</h1>    
     <MeuComponente/>

     <MeuBotao conteudo = 'me clique'/>
     <MeuBotao conteudo = 'depois aqui'/>
     <MeuBotao conteudo = 'e por fim aqui'/>

    </div>
  )
}

function MeuBotao(props){

  console.log()
  return (
    <button>{props.conteudo}</button>
  )
}



export default App

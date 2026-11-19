
// Capturando os elementos do HTML
const formulario = document.getElementById("formulario");
const nome = document.getElementById("nome");
const area = document.getElementById("area");
const resultado = document.getElementById("resultado");
const btnTema = document.getElementById("btnTema");

// Função responsável por gerar a orientação
function gerarOrientacao(nomeUsuario, tecnologia) {

    let mensagem = "";

    // Verificando a tecnologia escolhida
    switch (tecnologia) {

        case "HTML":
            mensagem = "Continue aprendendo sobre tags, elementos semânticos, formulários e estruturação de páginas web.";
            break;

        case "CSS":
            mensagem = "Continue praticando cores, espaçamentos, Flexbox, Grid, animações e responsividade.";
            break;

        case "JavaScript":
            mensagem = "Continue estudando variáveis, funções, condições, eventos e manipulação do DOM.";
            break;

        default:
            mensagem = "Escolha uma tecnologia para receber sua orientação.";
    }

    return `Olá, ${nomeUsuario}! 🚀 ${mensagem}`;
}

// Evento do formulário
formulario.addEventListener("submit", function(event) {

    // Evita que a página seja recarregada
    event.preventDefault();

    // Capturando e tratando os valores
    const nomeUsuario = nome.value.trim();
    const tecnologia = area.value;

    // Verificando se o nome foi preenchido
    if (nomeUsuario === "") {

        resultado.textContent = "Por favor, digite seu nome para continuar.";
        resultado.classList.remove("sucesso");
        resultado.classList.add("erro");

    } else if (tecnologia === "") {

        resultado.textContent = "Por favor, escolha uma tecnologia.";
        resultado.classList.remove("sucesso");
        resultado.classList.add("erro");

    } else {

        // Gerando a mensagem personalizada
        const mensagem = gerarOrientacao(nomeUsuario, tecnologia);

        resultado.textContent = mensagem;

        resultado.classList.remove("erro");
        resultado.classList.add("sucesso");

    }

});

// Evento para alternar o tema
btnTema.addEventListener("click", function() {

    // Adiciona ou remove a classe tema-escuro
    document.body.classList.toggle("tema-escuro");

    // Atualiza o texto do botão
    if (document.body.classList.contains("tema-escuro")) {

        btnTema.textContent = "☀️ Tema claro";

    } else {

        btnTema.textContent = "🌙 Tema escuro";

    }

});
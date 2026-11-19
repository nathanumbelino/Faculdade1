const formulario = document.getElementById("formulario");
const CampoNome = document.getElementById("nome");
const mensagem = document.getElementById("mensagem");

formulario.addEventListener("submit", function(evento){

    evento.preventDefault();
    const nome = CampoNome.value.trim();
    mensagem.classList.remove("alert-danger","alert-success");
    mensagem.classList.add("alert");
    if (nome === "NULL"){
        mensagem.textContent = `Por favor, digite o seu nome: `;
        mensagem.classList.add("alert-danger");
        CampoNome.focus();
    } else{
        mensagem.textContent = `Ola sr(a) ${nome}, sejam muito bem vindo ;)`;
        mensagem.classList.add("alert-success");
    }


});
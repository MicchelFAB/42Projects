# 42Porto-lvl_5_Inception

## Descrição

Este projeto tem como objetivo criar e gerenciar containers Docker para simular um ambiente de infraestrutura. Ele faz parte do currículo da 42Porto, focando em práticas de DevOps, virtualização e automação de serviços. O projeto visa construir um sistema funcional composto por múltiplos serviços isolados e interconectados via Docker, promovendo o aprendizado de orquestração, segurança e escalabilidade.

## Objetivos

- Construir um ambiente virtualizado utilizando Docker.
- Automatizar o deployment de múltiplos serviços (como NGINX, WordPress, MariaDB, etc).
- Garantir isolamento e comunicação entre containers.
- Aprender conceitos essenciais de infraestrutura como código (IaC), redes virtuais e volumes persistentes.

## Estrutura do Projeto

Os principais componentes do projeto são:

- **NGINX**: Proxy reverso para redirecionamento de tráfego.
- **WordPress**: CMS para gerenciamento de conteúdo.
- **MariaDB**: Banco de dados relacional utilizado pelo WordPress.
- **Dockerfiles**: Definem como cada serviço é construído e configurado.
- **Scripts Shell**: Automatizam a criação, configuração e inicialização dos containers.
- **Makefile**: Facilita o gerenciamento do ciclo de vida dos containers (build, up, down, clean).

## Como Utilizar

Para executar o projeto, siga os passos abaixo:

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/MicchelFAB/42Porto-lvl_5_Inception.git
   cd 42Porto-lvl_5_Inception
   ```

2. **Configure os arquivos de ambiente:**  
   Preencha as variáveis necessárias nos arquivos `.env` (se aplicável).

3. **Build e deploy dos containers:**
   ```bash
   make up
   ```
   Isso irá construir as imagens Docker e inicializar todos os serviços.

4. **Acessar os serviços:**  
   Normalmente, o NGINX estará acessível via `localhost` na porta definida (ex: 443 para HTTPS).

5. **Para parar e remover os containers:**
   ```bash
   make down
   ```

6. **Para limpar imagens e volumes:**
   ```bash
   make clean
   ```

## Exemplos de Uso

- **Subir o ambiente completo:**
  ```bash
  make up
  ```
- **Derrubar todos os serviços:**
  ```bash
  make down
  ```
- **Reconstruir do zero:**
  ```bash
  make re
  ```

## Diferenças Entre Partes Obrigatória e Bônus

### Parte Obrigatória

- Montagem dos serviços principais e configuração básica dos containers.
- Foco no funcionamento e comunicação entre WordPress, MariaDB e NGINX.

## Conceitos Envolvidos

### Docker & Containers

Container é uma unidade padrão de software que empacota código e suas dependências para rodar de maneira rápida e confiável em qualquer ambiente. O Docker é a plataforma utilizada para criar, gerenciar e orquestrar esses containers.

### Dockerfile

Arquivo que define as instruções para criar uma imagem Docker customizada de um serviço.

### Shell Script

Utilizado para automatizar tarefas como criação de banco de dados, configuração de usuários ou inicialização de serviços dentro dos containers.

### Makefile

Permite o gerenciamento simplificado do projeto, facilitando comandos como build, up, down e clean.

### Volumes

Permitem persistência de dados entre reinicializações dos containers.

### Redes Virtuais

Garantem a comunicação segura e isolada entre os containers.

## Recomendações

- Certifique-se de ter o Docker e o Docker Compose instalados.
- Sempre revise suas configurações de rede e variáveis de ambiente.
- Para maior segurança, utilize certificados SSL válidos e proteja as credenciais de acesso.

## Créditos

Projeto desenvolvido por [MicchelFAB](https://github.com/MicchelFAB) como parte do nível 5 do currículo da 42Porto.

---

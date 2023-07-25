Matheus Albert da Silva Araújo (20220051274)

2.1 - O que é "git cherry-pick"?
R:O comando git cherry-pick é ultilizado quando se deseja aplicar as alterações de um ou mais commits em um branch específico, ele é últil quando se deseja aplicar as alterações de uma branch para outra sem realizar a mesclagem das duas. O fluxo de desenvolvimento pode ocorrer da sequinte forma:
    1 - desenvolvedor cria uma nova branch,no qual as alterações serão feitas.
    2 - o commits desejados são selecionados pelo desenvolvedor.
    3 - o comando "git cherry-pick <commit>" é executado e as alterações são realizadas.

2.4 - O que é o "HEAD" no Git?
R: "HEAD" faz referência ao último commit realizado na branch, sendo ele basicamente um ponteiro que aponta para o commit atual da branch. Álem disso, o git usa o "HEAD" para determinar o estado atual da branch e seu conteudo, uma vez que ele aponta para o commit atual de onde veem as alterações do diretoria de trabalho. O "HEAD" é frequentemente ultilizado em comandos git que fazem referência ao commit atual,como,por exemplo, "git reset", "git checkout" e "git merge".

2.6 - Qual é a diferença entre um 'fork' e um 'branch'?
R: O "fork" é ultilizado quando se deseja fazer uma cópia de um repositorio, mantendo todas os seus arquivos, commits, branchs e tudo mais que nele estiver. Ou seja, quando você faz um "fork" em um repositório, é feita uma cópia do mesmo repositório em sua conta git.Permitindo que sejam feitas alterações nesse repositório que não irão afetar o repositório original. comando: git fork <ulr-repositorio>.
Por outro lado, o "branch" é uma cópia temporária de um repositório, que é mantida no mesmo repositório em que é feita. Ou seja, quando você cria uma nova branch em um repositório git, é feita uma cópia temporária do código, que fica separada da branch principal, na qual podem ser feitas alterações sem afetar o repositório original. comando: git branch -b <nome-branch>.

2.8 - O que é um 'stash'?
R: O comando "git stash" é ultilizado quando se deseja salvar as alterações feitas em uma branch sem precisar criar um novo commit e modificar a branch. Ou seja, ele salva temporariamente as alterações e as oculta na branch atual, sem precisar criar um novo commit. O comando "git stash" cria uma nova stash que contém todas as alterações que você fez desde o último commit e as remove do seu diretório de trabalho. Para aplicar as alterações de um stash é usado o comando "git stash apply <opcional: indice-stash>", além disso, é possível listar as stashs de um repositório com o comando "git stash list" e remover com o comando "git stash drop".

2.10 - O que é um "pull request"?
R: O "pull request" é uma solicitação que você faz ao proprietário de um repositório para que as alterações realizas em um fork sejam incorporadas ao repositório original. É uma forma muito eficiente para promover a colaboração entre os membros de uma equipe de desenvolvimento. Quando um "pull request" é feito, o proprietário analisa as alterações feitas no repositório e decide se elas devem ou não ser integradas ao repositório principal. Os pull requests geralmente incluem uma descrição detalhada das alterações que você fez, bem como um registro das etapas necessárias para testar suas alterações.
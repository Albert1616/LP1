ENTRADA: 
vagas = 2;
Aluno* lst_alunos = new Aluno[vagas]{
{201810, "Matheus", 7.5,4.1,2.0},{201704, "Albert", 5.5,4.0,10.0}};
Turma* turma = new Turma(5);
turma->SetVagas(vagas);
turma->setAlunos(lst_alunos);
turma->ordenaCampos("nome");
turma->imprimeAlunos();
SAÍDA:
Albert 201704 6.5
Matheus 201810 4.53333

ENTRADA: 
vagas = 2;
Aluno* lst_alunos = new Aluno[vagas]{
{201540, "Rodrigo", 4.0,1.0,7.0}, {201851, "Leticia", 10.0,7.0,1.0}};
Turma* turma = new Turma(5);
turma->SetVagas(vagas);
turma->setAlunos(lst_alunos);
turma->ordenaCampos("matricula");
turma->imprimeAlunos();
SAÍDA:
Rodrigo 201540 4
Leticia 201851 6

ENTRADA: 
vagas = 3;
Aluno* lst_alunos = new Aluno[vagas]{
{201540, "Rodrigo", 4.0,1.0,7.0}, {201851, "Leticia", 10.0,7.0,1.0},
{202205, "Rayssa", 10.0, 7.5, 8.0}};
Turma* turma = new Turma(5);
turma->SetVagas(vagas);
turma->setAlunos(lst_alunos);
turma->ordenaCampos("nota");
turma->imprimeAlunos();
SAÍDA:
Rodrigo 201540 4
Leticia 201851 6
Rayssa 202205 8.5

ENTRADA: 
vagas = 5;
Aluno* lst_alunos = new Aluno[vagas]{
{201810, "Matheus", 7.5,4.1,2.0},{201704, "Albert", 5.5,4.0,10.0},
{201540, "Rodrigo", 4.0,1.0,7.0}, {201851, "Leticia", 10.0,7.0,1.0},
{202205, "Rayssa", 10.0, 7.5, 8.0}};
Turma* turma = new Turma(10);
turma->SetVagas(vagas);
turma->setAlunos(lst_alunos);
turma->imprimeAlunos();
turma->ordenaCampos("nome");
turma->imprimeAlunos();
SAÍDA:

Matheus 201810 4.53333
Albert 201704 6.5
Rodrigo 201540 4
Leticia 201851 6
Rayssa 202205 8.5
---------
Albert 201704 6.5
Leticia 201851 6
Matheus 201810 4.53333
Rayssa 202205 8.5
Rodrigo 201540 4




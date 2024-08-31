public class mediaAluno {
  private String nome;
  private String ra;
  private int notaMensal;
  private int notaBimestral;
  private int notaAtividade;
  private int notaPresenca;

  public mediaAluno(String nome, String ra, int notaMensal, int notaBimestral, int notaAtividade, int notaPresenca){
    this.nome = nome;
    this.ra = ra;
    this.notaMensal = notaMensal;
    this.notaBimestral = notaBimestral;
    this.notaAtividade = notaAtividade;
    this.notaPresenca = notaPresenca;
  }

  public double calcularMedia(){
    return (notaMensal + notaBimestral + notaAtividade + notaPresenca) / 4;
  }

  public void verificarAprovacao(){
    double media = calcularMedia();
    if(calcularMedia() < 6){
      System.out.println("Aluno" + nome + ra + "foi reprovado média:" + media) ;
    } else{
      System.out.println("Aluno" + nome + ra + "foi aprovado média:" + media);
    }
  }

  public static void main(String[] args){
    Aluno aluno1 = new Aluno("Geovani", "RA 12381293809", 10, 2, 2, 6);
    aluno1.verificarAprovacao();
  }
}

class Bird{
	private String zhongLei;
	private String Corlor;
	void setZhongLei(String n){
		zhongLei = n;
	}
	String getZhongLei(){
		return zhongLei;
	}
	
	void setCorlor(String n){
		Corlor = n;
	}
	String getCorlor(){
		return Corlor;
	}
}

public class BirdDemo{
	public static void main(String age[]){
		Bird maque = new Bird();
		maque.setZhongLei("ÂéÈ¸");
		System.out.println(maque.getZhongLei());
		maque.setCorlor("ºÚÉ«");
		System.out.println(maque.getCorlor());

		Bird xique = new Bird();
		xique.setZhongLei("Ï²Èµ");
		System.out.println(xique.getZhongLei());
		xique.setCorlor("°×É«");
		System.out.println(xique.getCorlor());
	
	}


}
class DongWu{
	String name;

	void eat(){
		System.out.println("³Ô");
	}
	void jiao(){
		System.out.println("½Ð");
	}
	void sleep(){
		System.out.println("Ë¯¾õ");
	}
}
class  DongWuDemo
{
	public static void main(String[] args) 
	{
		DongWu dog1 = new DongWu();
		dog1.name = "Ð¡ºÚ";
		System.out.println(dog1.name);
		dog1.eat();
		dog1.jiao();

		DongWu cat = new DongWu();
		cat.name = "²Øéá";
		System.out.println(cat.name);
		cat.eat();
		cat.jiao();
	}
}

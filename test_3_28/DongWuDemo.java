class DongWu{
	String name;

	void eat(){
		System.out.println("��");
	}
	void jiao(){
		System.out.println("��");
	}
	void sleep(){
		System.out.println("˯��");
	}
}
class  DongWuDemo
{
	public static void main(String[] args) 
	{
		DongWu dog1 = new DongWu();
		dog1.name = "С��";
		System.out.println(dog1.name);
		dog1.eat();
		dog1.jiao();

		DongWu cat = new DongWu();
		cat.name = "����";
		System.out.println(cat.name);
		cat.eat();
		cat.jiao();
	}
}

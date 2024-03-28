class  Student{
//成员变量
	//学生姓名
	private String name;
	//封装
	void setName(String n){
		name = n;
	}
	String getName(){
		return name;
	}
	//学生性别
	private String sex;
	void setSex(String s){
		sex = s;
	}
	String getSex(){
		return sex;
	}
//成员方法
	void eat(){
		System.out.println("我能吃饭");
	}
}
public class StudentDemo{
	public static void main(String args[]){
		Student stud1 = new Student();
		//stud1.name= "张三";
		stud1.setName("大嘴儿");
		stud1.setSex("性别：男");
		System.out.println(stud1.getName());
		System.out.println(stud1.getSex());
		stud1.eat();

		Student stud2 = new Student();
		//stud1.name= "李四";
		stud2.setName("张嗷");
		stud2.setSex("性别：未知");
		System.out.println(stud2.getName());
		System.out.println(stud2.getSex());
		stud2.eat();

		Student stud3 = new Student();
		//stud1.name= "李四";
		stud3.setName("西八");
		stud3.setSex("性别：男");
		System.out.println(stud3.getName());
		System.out.println(stud3.getSex());
		stud3.eat();

	}
}
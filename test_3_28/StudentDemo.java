class  Student{
//��Ա����
	//ѧ������
	private String name;
	//��װ
	void setName(String n){
		name = n;
	}
	String getName(){
		return name;
	}
	//ѧ���Ա�
	private String sex;
	void setSex(String s){
		sex = s;
	}
	String getSex(){
		return sex;
	}
//��Ա����
	void eat(){
		System.out.println("���ܳԷ�");
	}
}
public class StudentDemo{
	public static void main(String args[]){
		Student stud1 = new Student();
		//stud1.name= "����";
		stud1.setName("�����");
		stud1.setSex("�Ա���");
		System.out.println(stud1.getName());
		System.out.println(stud1.getSex());
		stud1.eat();

		Student stud2 = new Student();
		//stud1.name= "����";
		stud2.setName("���");
		stud2.setSex("�Ա�δ֪");
		System.out.println(stud2.getName());
		System.out.println(stud2.getSex());
		stud2.eat();

		Student stud3 = new Student();
		//stud1.name= "����";
		stud3.setName("����");
		stud3.setSex("�Ա���");
		System.out.println(stud3.getName());
		System.out.println(stud3.getSex());
		stud3.eat();

	}
}
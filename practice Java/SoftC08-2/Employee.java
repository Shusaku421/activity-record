//Employeeクラス:各種設定
public class Employee {

	private int emplNo;//社員番号をprivate宣言
	private String name;//社員名をprivate宣言
	private String depart;//所属部署をprivate宣言
	private int salary;//基本給をprivate宣言

	Employee() {//コンストラクタ:各変数の値を設定
		emplNo = 19;
		name = "鯱区面伊";
		depart = "人事部";
		salary = 35000;
	}

	public void show() {//showメソッド:社員情報を表示
		System.out.println("社員番号は" + emplNo);
		System.out.println("社員名は" + name);
		System.out.println("所属部署は" + depart);
		System.out.println("基本給は" + salary);
		System.out.println();
	}

	//社員番号のセッターメソッド
	public void setEmplNo(int emplNo) {
		this.emplNo = emplNo;
	}

	//社員名のセッターメソッド
	public void setName(String name) {
		this.name = name;
	}

	//所属部署のセッターメソッド
	public void setDepart(String depart) {
		this.depart = depart;
	}

	//基本給のセッターメソッド
	public void setSalary(int salary) {
		this.salary = salary;
	}

	//社員番号のゲッターメソッド
	public int getEmplNo() {
		return emplNo;
	}

	//社員名のゲッターメソッド
	public String getName() {
		return name;
	}

	//所属部署のゲッターメソッド
	public String getDepart() {
		return depart;
	}

	//基本給のゲッターメソッド
	public int getSalary() {
		return salary;
	}
}

/*実行結果
社員番号は19
社員名は鯱区面伊
所属部署は人事部
基本給は35000

社員番号は19
社員名はウィリアムウィスキー
所属部署はシステム開発部
基本給は35000

*/

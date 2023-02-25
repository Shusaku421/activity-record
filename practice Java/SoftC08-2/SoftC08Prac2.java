//SoftC08Prac2クラス:社員情報
public class SoftC08Prac2 {
	//メインメソッド
	public static void main(String[] args) {
		Employee emp = new Employee();//Employee クラスのインスタンスを生成

		emp.getEmplNo();//ゲッターメソッドを呼び出すことで社員番号の値を取得
		emp.getName();//ゲッターメソッドを呼び出すことで社員名の値を取得
		emp.getDepart();//ゲッターメソッドを呼び出すことで所属部署の値を取得
		emp.getSalary();//ゲッターメソッドを呼び出すことで基本給の値を取得
		emp.show();//表示

		emp.setName("ウィリアムウィスキー");//社員名をセッターメソッドで変更
		emp.setDepart("システム開発部");//所属部署をセッターメソッドで変更
		emp.getName();//変更後の社員名をゲッターメソッドで取得
		emp.getDepart();//変更後の所属部署をゲッターメソッドで取得
		emp.show();//表示
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

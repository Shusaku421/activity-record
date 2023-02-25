import package1.Addition;

public class Soft08_3 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
	int val1=10,val2=20;//int型val1,val2定義
	int result;//result
	Addition inst=new Addition();//インスタンス生成
	result=inst.calc(val1,val2);//メソッド呼び出し計算、結果を表示
	System.out.println("答えは"+result);
	}
}

/*実行結果
答えは30*/

/*１．参照元にするプロジェクトを右クリックし、「ビルド・パス」＞「ビルド・パスの構成」をクリックします。
 * ２．「Javaのビルドパス」>「プロジェクト」>「クラスパス」>「追加」ボタンをクリックします。
 * ３．参照先のプロジェクトにチェックを入れOKを押します。*/

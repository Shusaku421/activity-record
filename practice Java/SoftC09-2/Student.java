// Runnableインタフェースを実装したStudent クラス
public class Student implements Runnable {

	private int StNo;//学籍番号を private で管理
	private String Name;//名前を private で管理

	Student(int StNo, String Name) {//コンストラクタで学籍番号と名前を設定
		this.StNo = StNo;
		this.Name = Name;
	}

	public int getStNo() {//学籍番号を返すゲッターメソッド
		return StNo;
	}

	public String getName() {//名前を返すゲッターメソッド
		return Name;
	}

	public void run() {//run()メソッド
		for (int i = 0; i < 20; i++) {//20回繰り返す
			try {
				System.out.println(getStNo());//ゲッターメソッドを呼び出すことで学籍番号を表示
				System.out.println(getName());//ゲッターメソッドを呼び出すことで名前を表示
				Thread.sleep(100);//100 ミリ秒停止
			} catch (InterruptedException e) {// 例外時のスタック情報を表示
				e.printStackTrace();
			}
		}
	}
}

/*実行結果
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
6
13
工藤康太
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
6
斎藤舜
13
工藤康太
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜
19
佐藤翔太
13
工藤康太
6
斎藤舜

*/
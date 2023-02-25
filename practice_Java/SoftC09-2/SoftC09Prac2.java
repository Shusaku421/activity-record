//SoftC09Prac2 クラス
public class SoftC09Prac2 {

	public static void main(String[] args) {
		Student inst1 = new Student(19, "佐藤翔太");// Student インスタンスを生成
		Student inst2 = new Student(13, "工藤康太");// Student インスタンスを生成
		Student inst3 = new Student(6, "斎藤舜");// Student インスタンスを生成

		Thread threadA = new Thread(inst1);//Thread インスタンスを生成
		Thread threadB = new Thread(inst2);//Thread インスタンスを生成
		Thread threadC = new Thread(inst3);//Thread インスタンスを生成

		threadA.start();//Thread インスタンスの start()メソッドを実行
		threadB.start();//Thread インスタンスの start()メソッドを実行
		threadC.start();//Thread インスタンスの start()メソッドを実行
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
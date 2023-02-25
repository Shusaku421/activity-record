//Mainjavaクラス：それぞれのメソッドを呼び出し、結果を表示
public class Mainjava {

	public static void main(String[] args) {
		//メインメソッド
		int[] val;//int型のインスタンス配列val
		val = new int[26];//要素数26確保
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			val[i] = Integer.parseInt(args[i]);//第i引数を整数に変換しval[i]へ代入
		}

		System.out.println("最大値は" + Function.max(val));//クラスメソッドmaxを呼び出し、最大値を表示
		System.out.println("最小値は" + Function.min(val));//クラスメソッドminを呼び出し、最小値を表示
		System.out.println("平均値は" + Function.ave(val));//クラスメソッドaveを呼び出し、平均を表示
		System.out.println("分散は" + Function.var(val));//クラスメソッドvarを呼び出し、分散を表示
		System.out.println("標準偏差は" + Function.sd(val));//クラスメソッドsdを呼び出し、標準偏差を表示
		System.out.println("中央値は" + Function.med(val));//クラスメソッドmedを呼び出し、中央値を表示
	}
}

/*実行結果
最大値は119
最小値は20
平均値は44.0
分散は461.0769230769231
標準偏差は21.472701811298062
中央値は39.0
*/

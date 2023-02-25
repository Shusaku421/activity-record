//Practice301_01クラス:変数の値を表示
public class Java0513 {
	//メインメソッド
	public static void main(String[] args) {

		String str = "JavaProgram";//String型インスタンスstrに"JavaProgram"を代入
		int i, ival = 5, strlen = str.length();
		/*ループカウンタiを定義,int型変数ivalに5を代入,int型変数strlenにstrの文字列の長さ(11)を代入*/
		double dval = 2.145;//double型変数dvalに2.145を代入
		double[] arry;//double型のインスタンス配列arry
		arry = new double[5];//要素数5を確保

		arry[0] = 6;//0番目の要素に6を代入
		arry[1] = 2;//1番目の要素に2を代入
		arry[2] = arry[0] - arry[1];//2番目の要素に0番目と1番目の減算結果(6-2)を代入
		arry[3] = arry[0] * arry[1];//3番目の要素に0番目と1番目の乗算結果(6*2)を代入
		arry[4] = arry[0] / arry[1];//4番目の要素に0番目と1番目の除算結果(6/2)を代入

		System.out.println(ival);//ivalの値を表示
		System.out.println(dval);//dvalの値を表示
		System.out.println(str);//strの値を表示
		System.out.println(strlen);//strlenの値を表示

		//arryを0～4番目まで順番に表示
		for (i = 0; i <= 4; i++) {
			System.out.println(arry[i]);
		}

	}
}

/*実行結果
5
2.145
JavaProgram
11
6.0
2.0
4.0
12.0
3.0
*/

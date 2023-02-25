//SoftC05Part2クラス：メソッドを実装
public class SoftC05Part2 {
//メインメソッド
	public static void main(String[] args) {
		int x,y,z;//int型演算値
		double Ca,Ta,Tra;//double型演算結果

		CalcArea instA=new CalcArea();//CalcArea クラスのインスタンスを生成
		x=Integer.parseInt(args[0]);//第1引数を整数に変換
		y=Integer.parseInt(args[1]);//第2引数を整数に変換
		z=Integer.parseInt(args[2]);//第3引数を整数に変換

		//コマンドライン引数の一つ目の値を引数に circleArea メソッドを呼び出し
		Ca=instA.circleArea(x);
		System.out.println("円の面積は"+Ca);//戻り値を表示
		//コマンドライン引数の一つ目の値と二つ目の値を引数に triangleArea メソッドを呼び出し
		Ta=instA.triangleArea(x,y);
		System.out.println("三角形の面積は"+Ta);//戻り値を表示
		//コマンドライン引数の一つ目の値、二つ目の値、三つ目の値を引数に trapezoidArea メソッドを呼び出し
		Tra=instA.trapezoidArea(x,y,z);
		System.out.println("台形の面積は"+Tra);//戻り値を表示
		System.out.println(String.format("面積の合計値は%.2f", Ca+Ta+Tra));//面積の合計値を表示
	}
}

/*実行結果
円の面積は12.56
三角形の面積は3.0
台形の面積は10.0
面積の合計値は25.56
 */
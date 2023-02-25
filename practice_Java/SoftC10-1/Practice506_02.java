import java.util.ArrayList;//ArrayListクラス使用時のインポート

public class Practice506_02 {//1ArrayListクラス使用例その2
	public static void main(String[] args) {//メインメソッド

		ArrayList<Object> list;//Object型list

		Integer intInst;//IntegerクラスintInst
		Double doubleInst;//DoubleクラスdoubleInst

		list = new ArrayList<>();//1ArrayListインスタンス生成

		list.add("文字列");//String型の追加
		System.out.println("現在の要素数：" + list.size());//size()メソッドで現在の要素数を取得

		list.add(100);//int型の追加
		System.out.println("現在の要素数：" + list.size());//size()メソッドで現在の要素数を取得

		list.add(3.14);//double型の追加
		System.out.println("現在の要素数：" + list.size());////size()メソッドで現在の要素数を取得

		// 0番目の要素をStringインスタンスで受け取る
		// ArrayListの型がObjectなので,Stringにキャストして代入
		// String strng=new String((String)list.get(0));
		String strng = (String) list.get(0);
		System.out.println("文字列インスタンス:" + strng);

		// 1番目の要素をIntegerインスタンスで受け取る
		// Integer intgr=new Integer((Integer)list.get(1));
		Integer intgr = (Integer) list.get(1);
		System.out.println("Integerインスタンス:" + intgr);

		// 2番目の要素をDoubleインスタンスで受け取る
		// Double dbl=new Double((Double)list.get(2));
		Double dbl = (Double) list.get(2);
		System.out.println("Doubleインスタンス:" + dbl);
	}
}

/*実行結果
現在の要素数：1
現在の要素数：2
現在の要素数：3
文字列インスタンス:文字列
Integerインスタンス:100
Doubleインスタンス:3.14*/
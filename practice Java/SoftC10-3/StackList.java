import java.util.LinkedList;//LinkedListをインポート

public class StackList<E> {//StackListクラス:LinkedListクラスを利用したスタック

	private LinkedList<E> list;//<E>型LinkedListインスタンスlist

	public StackList() {//コンストラクタで初期化
		list = new LinkedList<>();
	}

	public void push(E element) {//データをスタックに追加し,追加した要素を表示
		list.addLast(element);//データをLinkedListの最後尾に追加
		System.out.println("プッシュ:" + element);//表示
	}

	public E pop() {//データをスタックから取り出し,取り出したデータを返す
		E ret = list.getLast();//LinkedListの最後尾のデータを取り出す
		System.out.println("ポップ:" + ret);//表示
		list.removeLast();//LinkedListの最後尾のデータを削除する
		return ret;//取り出したデータを返す
	}

	public void StackSize() {//スタックの要素数を返すメソッドStackSize()
		System.out.println("現在の要素数は" + (list.size()));//要素数表示
	}
}
//実行結果
//スタック
//プッシュ:1
//現在の要素数は1
//プッシュ:2
//現在の要素数は2
//プッシュ:3
//現在の要素数は3
//ポップ:3
//現在の要素数は2
//ポップ:2
//現在の要素数は1
//ポップ:1
//現在の要素数は0
//
//キュー
//エンキュー:1
//現在の要素数は1
//エンキュー:2
//現在の要素数は2
//エンキュー:3
//現在の要素数は3
//デキュー:1
//現在の要素数は2
//デキュー:2
//現在の要素数は1
//デキュー:3
//現在の要素数は0
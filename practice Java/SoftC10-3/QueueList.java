import java.util.LinkedList;//LinkedListをインポート

public class QueueList<T> {//QueueListクラス:LinkedListクラスを利用したキュー

	private LinkedList<T> list;//<T>型LinkedListインスタンスlist

	public QueueList() {//コンストラクタで初期化
		list = new LinkedList<>();
	}

	public void enqueue(T element) {//データをキューに追加し,追加した要素を表示
		list.addLast(element);//データをLinkedListの最後尾に追加
		System.out.println("エンキュー:" + element);//表示
	}

	public T dequeue() {//データをキューから取り出し,取り出したデータを返す
		T ret = list.getFirst();//LinkedListの最初のデータを取り出す
		System.out.println("デキュー:" + ret);//表示
		list.removeFirst();//LinkedListの最初のデータを削除する
		return ret;//取り出したデータを返す
	}

	public void QueueSize() {//スタックの要素数を返すメソッドStackSize()
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

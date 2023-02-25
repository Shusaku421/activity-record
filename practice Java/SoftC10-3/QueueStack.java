
public class QueueStack {//QueueStackクラス：キュートスタックの実現
	public static void main(String[] args) {//メインメソッド

		StackList<Integer> instA = new StackList<>();//スタックを扱うStackListインスタンスの生成
		QueueList<Integer> instB = new QueueList<>();//キューを扱うQueueListインスタンスの生成
		int i;//インクリメント変数

		System.out.println("スタック");//スタックの開始
		for (i = 1; i <= 3; i++) {//3回繰り返す
			instA.push(i);//要素iをプッシュ
			instA.StackSize();//追加した時の要素数表示
		}
		for (i = 1; i <= 3; i++) {//3回繰り返す
			instA.pop();//要素をポップ
			instA.StackSize();//削除した時の要素数表示
		}

		System.out.println();//改行

		System.out.println("キュー");//キューの開始
		for (i = 1; i <= 3; i++) {//3回繰り返す
			instB.enqueue(i);//要素iをエンキュー
			instB.QueueSize();//追加した時の要素数表示
		}
		for (i = 1; i <= 3; i++) {//3回繰り返す
			instB.dequeue();//要素iをデキュー
			instB.QueueSize();//削除した時の要素数表示
		}
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

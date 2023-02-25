
public class SoftC09Prac2_kai {

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

		try {//全てのスレッド処理が終了するのを待機
			threadA.join();
			threadB.join();
			threadC.join();
		} catch (InterruptedException e) {// 例外時のスタック情報を表示
			System.out.println(e);
		}
		System.out.println("全てのスレッド処理が終了しました");//表示
	}
}
/*実行結果
 19
佐藤翔太
13
工藤康太
6
斎藤舜
全てのスレッド処理が終了しました
 */

/*
スレッドの同期：同期をかけるには、次のようにメソッドにsynchronizedを付ける。
するとこのメソッドを含むインスタンスに同期がかかり、他のスレッドはそのインスタンスのsynchronizedメソッドは実行できなくなり実行が終わるまで待機状態になる。
そのインスタンスのsynchronizedでないメソッドは自由に実行できる。 また、同じクラスから生成されたものでも別インスタンスのメソッドは実行可能。
メソッド全体でなく、メソッドの一部分だけでも、synchronizedブロックを使って同期をかけることができる
 例　synchronized void mathodA() { …        // メソッド単位で設定
 synchronized (オブジェクト) { …                 // ブロック単位で設定

 スレッドのデッドロック：２つのスレッドが２つのロックを取り合い、互いに相手のスレッドがロックを解放するのを待つ状態のこと
 例　ＡさんとＢさんがコンビニ弁当を１つ買って、一緒に仲良く食べることになった
 しかし、袋を開けるとお箸が1膳しか入っていなかった。1膳の内の１本ずつをそれぞれAさんとBさんがもった。
もちろん、箸一本ではどちらも弁当を食べることができない。Ａさんは、仕方なくＢさんがお箸を置くのを待ちます。
Ｂさんも同じくＡさんがお箸を置くのを待ちます。(硬直状態が続く...)

 スレッド間通信：複数のスレッド間で協調して処理を行う場合、あるスレッドの部分処理が終わるのを、他方のスレッドが待ちたいときにwait/notify/notifyAllメソッドを使用して実現する。
 waitメソッドは、notify/notifyAllメソッドが呼び出されるまで処理を待機させる。
 waitメソッドはObjectクラスのメソッドなので、すべてのクラスからそのまま使用できる。
 waitメソッドは同期の仕組みを使って待ち合わせをするように作られているため、synchronizedで同期をとっておかないといけない。
 整数値を引数にとることで（引数ミリ秒）後に実行可能状態なります。 引数がないと、次項のnotify/notifyAllが出されるまで、復帰しない。
 例　synchronized(this){ //引数なしのwaitメソッド
     try{
     wait();
     }catch(InterruptedException){}
     }

     wait(5000);//5秒後に実行可能状態になる

notifyメソッドは、waitメソッドによって待機状態になっているスレッドを実行可能状態にする。
待機中のメソッドが複数あるときは、そのうちのどれか1つだけを、実行可能状態にする
waitメソッドと同じく同期を取っておく必要があり、try/catchは必要ない。
notifyAllは待機中のすべてのメソッドを実行可能状態にする。 ただし、実際に実行状態になるのはそのうちのいずれか1つだけ。
例　synchronized(this){
    notify();
    }

 */
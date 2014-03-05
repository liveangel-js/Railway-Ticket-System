if you can't see other words,please do iconv -f gbk -t utf8 readme!.txt > readme!.txt.utf8 
then open readme!.txt.utf8 !

WARNING!!由于技术有限，必须先关闭服务器端（杀死进程而不是窗口）再关闭客户端！！！否则降导致数据混乱等严重错误！！

日志文件在Server同级目录下生成 daily records.txt

首先导入createDatabase.sql建立数据库
修改 server_db.cpp文件中 第一个方法中（第十几行）conn = mysql_real_connect(conn, "localhost", "root", "root", "tickets", 0, NULL, 0);第二个root为你的数据库密码

在Client文件夹下执行
qmake(可选因为已经附带了生成好的makefile)
make

在Server文件夹下执行
qmake(可选因为已经附带了生成好的makefile)
make

如果出现找不到mysqlclient.a的情况 是因为外部库文件路径出错，修改.pro文件中 -lmysqlclient前面的目录为系统中libmysqlclient.a的目录即可

./Server 开启服务器
./Client 启动客户端
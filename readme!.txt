if you can't see other words,please do iconv -f gbk -t utf8 readme!.txt > readme!.txt.utf8 
then open readme!.txt.utf8 !

WARNING!!���ڼ������ޣ������ȹرշ������ˣ�ɱ�����̶����Ǵ��ڣ��ٹرտͻ��ˣ��������򽵵������ݻ��ҵ����ش��󣡣�

��־�ļ���Serverͬ��Ŀ¼������ daily records.txt

���ȵ���createDatabase.sql�������ݿ�
�޸� server_db.cpp�ļ��� ��һ�������У���ʮ���У�conn = mysql_real_connect(conn, "localhost", "root", "root", "tickets", 0, NULL, 0);�ڶ���rootΪ������ݿ�����

��Client�ļ�����ִ��
qmake(��ѡ��Ϊ�Ѿ����������ɺõ�makefile)
make

��Server�ļ�����ִ��
qmake(��ѡ��Ϊ�Ѿ����������ɺõ�makefile)
make

��������Ҳ���mysqlclient.a����� ����Ϊ�ⲿ���ļ�·�������޸�.pro�ļ��� -lmysqlclientǰ���Ŀ¼Ϊϵͳ��libmysqlclient.a��Ŀ¼����

./Server ����������
./Client �����ͻ���
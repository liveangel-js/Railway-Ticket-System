DROP DATABASE IF EXISTS tickets;
CREATE DATABASE tickets;

USE tickets;

GRANT ALL ON tickets.* TO root@localhost IDENTIFIED BY 'root';

CREATE TABLE t_ticket(
	ticketno int(11) PRIMARY KEY AUTO_INCREMENT NOT NULL,
	checi varchar(10) NOT NULL,
	start_place varchar(20) NOT NULL,
	finish_place varchar(20) NOT NULL,
	start_time varchar(25) NOT NULL,
	finish_time varchar(25) NOT NULL,
	price int(11) NOT NULL,
	datetime varchar(20) NOT NULL,
	remain int(11) NOT NULL
) ENGINE =InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE t_user (
	userno int(11) PRIMARY KEY AUTO_INCREMENT NOT NULL,
	name varchar(30) NOT NULL,
	password varchar(20) NOT NULL,
	ID varchar(20) NOT NULL,
	phone varchar(30) NOT NULL,
	email varchar(35) NOT NULL
) ENGINE =InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE t_order(
	orderno int(11) PRIMARY KEY AUTO_INCREMENT NOT NULL,
	userno int(11) NOT NULL,
	ticketno int(11) NOT NULL
) ENGINE =InnoDB DEFAULT CHARSET=utf8;

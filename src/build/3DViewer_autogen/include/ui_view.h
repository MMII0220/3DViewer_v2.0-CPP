/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *_top_line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *_pushButton_transformation1;
    QPushButton *pushButton_settings1;
    QLabel *_label_move;
    QLabel *_label_rotate;
    QLabel *_label_scale;
    QSlider *horizontalSlider_move_x;
    QSlider *horizontalSlider_move_y;
    QSlider *horizontalSlider_move_z;
    QSlider *horizontalSlider_rotate_x;
    QSlider *horizontalSlider_rotate_y;
    QSlider *horizontalSlider_rotate_z;
    QSlider *horizontalSlider_scale;
    QLabel *_label_x_1;
    QLabel *_label_x_2;
    QLabel *_label_y_1;
    QLabel *_label_y_2;
    QLabel *_label_z_1;
    QLabel *_label_z_2;
    QLabel *label_file_info;
    QPushButton *saveAsButton;
    QTabWidget *tabWidget_save_format;
    QWidget *tab_3;
    QWidget *tab_4;
    QPushButton *pushButton_bmp;
    QPushButton *pushButton_jpeg;
    QPushButton *pushButton_gif;
    QPushButton *pushButton_open_file;
    QWidget *tab_2;
    QPushButton *pushButton_settings2;
    QPushButton *_pushButton_transformation2;
    QLabel *_label_edges;
    QLabel *_label_vertices;
    QLabel *_label_other;
    QSlider *horizontalSlider_edges_thick;
    QSlider *horizontalSlider_vert_size;
    QLabel *_label_edges_type;
    QLabel *_label_edges_color;
    QLabel *_label_vertex_disp_method;
    QLabel *_label_vertex_color;
    QLabel *_label_project_type;
    QLabel *_label_bg_color;
    QComboBox *comboBox;
    QPushButton *pushButton_edges_color;
    QComboBox *comboBox_disp_method;
    QPushButton *pushButton_vertex_color;
    QComboBox *comboBox_disp_method_2;
    QPushButton *pushButton_bg_color;
    QLabel *_label_edges_thick;
    QLabel *_label_vertex_size;
    QLabel *_label_bg1;
    QLabel *_label_bg2;
    QLabel *_label_bg3;
    QLabel *label_filename;
    QButtonGroup *buttonGroupColors;
    QButtonGroup *buttonGroupTabs;
    QButtonGroup *buttonGroupImg;

    void setupUi(QWidget *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(1200, 670);
        View->setMinimumSize(QSize(1200, 670));
        View->setMaximumSize(QSize(1200, 670));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 1200, 670));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 0, 981, 651));
        widget->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px;"));
        _top_line = new QLabel(centralwidget);
        _top_line->setObjectName(QString::fromUtf8("_top_line"));
        _top_line->setGeometry(QRect(570, 650, 631, 20));
        _top_line->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"border: 1px solid rgb(0, 0, 0);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-10, -30, 231, 711));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"border: 1px solid rgb(0, 0, 0);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        _pushButton_transformation1 = new QPushButton(tab);
        _pushButton_transformation1->setObjectName(QString::fromUtf8("_pushButton_transformation1"));
        _pushButton_transformation1->setGeometry(QRect(0, 20, 123, 25));
        QFont font;
        font.setPointSize(10);
        _pushButton_transformation1->setFont(font);
        _pushButton_transformation1->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 37, 118);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
""));
        pushButton_settings1 = new QPushButton(tab);
        buttonGroupTabs = new QButtonGroup(View);
        buttonGroupTabs->setObjectName(QString::fromUtf8("buttonGroupTabs"));
        buttonGroupTabs->addButton(pushButton_settings1);
        pushButton_settings1->setObjectName(QString::fromUtf8("pushButton_settings1"));
        pushButton_settings1->setGeometry(QRect(123, 20, 82, 25));
        pushButton_settings1->setFont(font);
        pushButton_settings1->setMouseTracking(true);
        pushButton_settings1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(52, 53, 56);\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(59, 73, 153);\n"
"}\n"
"\n"
""));
        _label_move = new QLabel(tab);
        _label_move->setObjectName(QString::fromUtf8("_label_move"));
        _label_move->setGeometry(QRect(15, 70, 70, 16));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        _label_move->setFont(font1);
        _label_move->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_rotate = new QLabel(tab);
        _label_rotate->setObjectName(QString::fromUtf8("_label_rotate"));
        _label_rotate->setGeometry(QRect(15, 200, 70, 16));
        _label_rotate->setFont(font1);
        _label_rotate->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_scale = new QLabel(tab);
        _label_scale->setObjectName(QString::fromUtf8("_label_scale"));
        _label_scale->setGeometry(QRect(15, 330, 70, 16));
        _label_scale->setFont(font1);
        _label_scale->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        horizontalSlider_move_x = new QSlider(tab);
        horizontalSlider_move_x->setObjectName(QString::fromUtf8("horizontalSlider_move_x"));
        horizontalSlider_move_x->setGeometry(QRect(60, 100, 140, 8));
        horizontalSlider_move_x->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_move_x->setMinimum(-300);
        horizontalSlider_move_x->setMaximum(300);
        horizontalSlider_move_x->setValue(0);
        horizontalSlider_move_x->setTracking(true);
        horizontalSlider_move_x->setOrientation(Qt::Horizontal);
        horizontalSlider_move_x->setInvertedAppearance(false);
        horizontalSlider_move_x->setInvertedControls(false);
        horizontalSlider_move_y = new QSlider(tab);
        horizontalSlider_move_y->setObjectName(QString::fromUtf8("horizontalSlider_move_y"));
        horizontalSlider_move_y->setGeometry(QRect(60, 130, 140, 8));
        horizontalSlider_move_y->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_move_y->setMinimum(-300);
        horizontalSlider_move_y->setMaximum(300);
        horizontalSlider_move_y->setValue(0);
        horizontalSlider_move_y->setOrientation(Qt::Horizontal);
        horizontalSlider_move_z = new QSlider(tab);
        horizontalSlider_move_z->setObjectName(QString::fromUtf8("horizontalSlider_move_z"));
        horizontalSlider_move_z->setGeometry(QRect(60, 160, 140, 8));
        horizontalSlider_move_z->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_move_z->setMinimum(-300);
        horizontalSlider_move_z->setMaximum(300);
        horizontalSlider_move_z->setValue(0);
        horizontalSlider_move_z->setOrientation(Qt::Horizontal);
        horizontalSlider_rotate_x = new QSlider(tab);
        horizontalSlider_rotate_x->setObjectName(QString::fromUtf8("horizontalSlider_rotate_x"));
        horizontalSlider_rotate_x->setGeometry(QRect(60, 230, 140, 8));
        horizontalSlider_rotate_x->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_rotate_x->setMinimum(-360);
        horizontalSlider_rotate_x->setMaximum(360);
        horizontalSlider_rotate_x->setOrientation(Qt::Horizontal);
        horizontalSlider_rotate_y = new QSlider(tab);
        horizontalSlider_rotate_y->setObjectName(QString::fromUtf8("horizontalSlider_rotate_y"));
        horizontalSlider_rotate_y->setGeometry(QRect(60, 260, 140, 8));
        horizontalSlider_rotate_y->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_rotate_y->setMinimum(-360);
        horizontalSlider_rotate_y->setMaximum(360);
        horizontalSlider_rotate_y->setOrientation(Qt::Horizontal);
        horizontalSlider_rotate_z = new QSlider(tab);
        horizontalSlider_rotate_z->setObjectName(QString::fromUtf8("horizontalSlider_rotate_z"));
        horizontalSlider_rotate_z->setGeometry(QRect(60, 290, 140, 8));
        horizontalSlider_rotate_z->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_rotate_z->setMinimum(-360);
        horizontalSlider_rotate_z->setMaximum(360);
        horizontalSlider_rotate_z->setOrientation(Qt::Horizontal);
        horizontalSlider_scale = new QSlider(tab);
        horizontalSlider_scale->setObjectName(QString::fromUtf8("horizontalSlider_scale"));
        horizontalSlider_scale->setGeometry(QRect(60, 360, 140, 8));
        horizontalSlider_scale->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_scale->setMinimum(1);
        horizontalSlider_scale->setMaximum(200);
        horizontalSlider_scale->setValue(100);
        horizontalSlider_scale->setOrientation(Qt::Horizontal);
        _label_x_1 = new QLabel(tab);
        _label_x_1->setObjectName(QString::fromUtf8("_label_x_1"));
        _label_x_1->setGeometry(QRect(30, 94, 10, 16));
        _label_x_1->setFont(font1);
        _label_x_1->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_x_2 = new QLabel(tab);
        _label_x_2->setObjectName(QString::fromUtf8("_label_x_2"));
        _label_x_2->setGeometry(QRect(30, 224, 10, 15));
        _label_x_2->setFont(font1);
        _label_x_2->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_y_1 = new QLabel(tab);
        _label_y_1->setObjectName(QString::fromUtf8("_label_y_1"));
        _label_y_1->setGeometry(QRect(30, 124, 10, 15));
        _label_y_1->setFont(font1);
        _label_y_1->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_y_2 = new QLabel(tab);
        _label_y_2->setObjectName(QString::fromUtf8("_label_y_2"));
        _label_y_2->setGeometry(QRect(30, 254, 10, 15));
        _label_y_2->setFont(font1);
        _label_y_2->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_z_1 = new QLabel(tab);
        _label_z_1->setObjectName(QString::fromUtf8("_label_z_1"));
        _label_z_1->setGeometry(QRect(30, 154, 10, 15));
        _label_z_1->setFont(font1);
        _label_z_1->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_z_2 = new QLabel(tab);
        _label_z_2->setObjectName(QString::fromUtf8("_label_z_2"));
        _label_z_2->setGeometry(QRect(30, 284, 10, 15));
        _label_z_2->setFont(font1);
        _label_z_2->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        label_file_info = new QLabel(tab);
        label_file_info->setObjectName(QString::fromUtf8("label_file_info"));
        label_file_info->setGeometry(QRect(20, 570, 201, 61));
        label_file_info->setFont(font);
        label_file_info->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        saveAsButton = new QPushButton(tab);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));
        saveAsButton->setGeometry(QRect(50, 400, 89, 25));
        saveAsButton->setFont(font1);
        saveAsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(100, 37, 118);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(49, 63, 133);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}"));
        tabWidget_save_format = new QTabWidget(tab);
        tabWidget_save_format->setObjectName(QString::fromUtf8("tabWidget_save_format"));
        tabWidget_save_format->setGeometry(QRect(60, 430, 141, 126));
        tabWidget_save_format->setStyleSheet(QString::fromUtf8("border: 0px;"));
        tabWidget_save_format->setElideMode(Qt::ElideNone);
        tabWidget_save_format->setUsesScrollButtons(true);
        tabWidget_save_format->setDocumentMode(false);
        tabWidget_save_format->setTabsClosable(false);
        tabWidget_save_format->setMovable(false);
        tabWidget_save_format->setTabBarAutoHide(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_save_format->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_bmp = new QPushButton(tab_4);
        buttonGroupImg = new QButtonGroup(View);
        buttonGroupImg->setObjectName(QString::fromUtf8("buttonGroupImg"));
        buttonGroupImg->addButton(pushButton_bmp);
        pushButton_bmp->setObjectName(QString::fromUtf8("pushButton_bmp"));
        pushButton_bmp->setGeometry(QRect(25, 0, 80, 25));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton_bmp->setFont(font2);
        pushButton_bmp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(100, 37, 118);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(49, 63, 133);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}"));
        pushButton_jpeg = new QPushButton(tab_4);
        buttonGroupImg->addButton(pushButton_jpeg);
        pushButton_jpeg->setObjectName(QString::fromUtf8("pushButton_jpeg"));
        pushButton_jpeg->setGeometry(QRect(25, 32, 80, 25));
        pushButton_jpeg->setFont(font2);
        pushButton_jpeg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(100, 37, 118);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(49, 63, 133);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}"));
        pushButton_gif = new QPushButton(tab_4);
        buttonGroupImg->addButton(pushButton_gif);
        pushButton_gif->setObjectName(QString::fromUtf8("pushButton_gif"));
        pushButton_gif->setGeometry(QRect(25, 64, 80, 25));
        pushButton_gif->setFont(font2);
        pushButton_gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(100, 37, 118);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(49, 63, 133);\n"
" color: rgb(255, 255, 255);\n"
" border-radius: 4px;\n"
"}"));
        tabWidget_save_format->addTab(tab_4, QString());
        pushButton_open_file = new QPushButton(tab);
        pushButton_open_file->setObjectName(QString::fromUtf8("pushButton_open_file"));
        pushButton_open_file->setGeometry(QRect(10, 650, 211, 20));
        pushButton_open_file->setFont(font1);
        pushButton_open_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(100, 37, 118);\n"
"	color: rgb(255, 255, 255);\n"
"	border:1px solid rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover {\n"
"	color: rgb(200, 200, 200);\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_settings2 = new QPushButton(tab_2);
        pushButton_settings2->setObjectName(QString::fromUtf8("pushButton_settings2"));
        pushButton_settings2->setGeometry(QRect(123, 20, 82, 25));
        pushButton_settings2->setFont(font);
        pushButton_settings2->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 37, 118);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
""));
        _pushButton_transformation2 = new QPushButton(tab_2);
        buttonGroupTabs->addButton(_pushButton_transformation2);
        _pushButton_transformation2->setObjectName(QString::fromUtf8("_pushButton_transformation2"));
        _pushButton_transformation2->setGeometry(QRect(0, 20, 123, 25));
        _pushButton_transformation2->setFont(font);
        _pushButton_transformation2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(52, 53, 56);\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(59, 73, 153);\n"
"}\n"
"\n"
""));
        _label_edges = new QLabel(tab_2);
        _label_edges->setObjectName(QString::fromUtf8("_label_edges"));
        _label_edges->setGeometry(QRect(15, 57, 58, 30));
        _label_edges->setFont(font1);
        _label_edges->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_vertices = new QLabel(tab_2);
        _label_vertices->setObjectName(QString::fromUtf8("_label_vertices"));
        _label_vertices->setGeometry(QRect(15, 240, 80, 16));
        _label_vertices->setFont(font1);
        _label_vertices->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_other = new QLabel(tab_2);
        _label_other->setObjectName(QString::fromUtf8("_label_other"));
        _label_other->setGeometry(QRect(15, 415, 58, 16));
        _label_other->setFont(font1);
        _label_other->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        horizontalSlider_edges_thick = new QSlider(tab_2);
        horizontalSlider_edges_thick->setObjectName(QString::fromUtf8("horizontalSlider_edges_thick"));
        horizontalSlider_edges_thick->setGeometry(QRect(25, 115, 140, 8));
        horizontalSlider_edges_thick->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color: rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_edges_thick->setMinimum(1);
        horizontalSlider_edges_thick->setMaximum(25);
        horizontalSlider_edges_thick->setValue(5);
        horizontalSlider_edges_thick->setTracking(true);
        horizontalSlider_edges_thick->setOrientation(Qt::Horizontal);
        horizontalSlider_edges_thick->setInvertedAppearance(false);
        horizontalSlider_edges_thick->setInvertedControls(false);
        horizontalSlider_vert_size = new QSlider(tab_2);
        horizontalSlider_vert_size->setObjectName(QString::fromUtf8("horizontalSlider_vert_size"));
        horizontalSlider_vert_size->setGeometry(QRect(25, 290, 140, 8));
        horizontalSlider_vert_size->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	height: 8;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	background-color:rgb(100, 37, 118);\n"
"	height: 8 px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(217, 217, 217);\n"
"	width: 8px;\n"
"	height: 8px;\n"
"  	border-radius: 4px;\n"
"}"));
        horizontalSlider_vert_size->setMinimum(1);
        horizontalSlider_vert_size->setMaximum(25);
        horizontalSlider_vert_size->setValue(5);
        horizontalSlider_vert_size->setTracking(true);
        horizontalSlider_vert_size->setOrientation(Qt::Horizontal);
        horizontalSlider_vert_size->setInvertedAppearance(false);
        horizontalSlider_vert_size->setInvertedControls(false);
        _label_edges_type = new QLabel(tab_2);
        _label_edges_type->setObjectName(QString::fromUtf8("_label_edges_type"));
        _label_edges_type->setGeometry(QRect(20, 140, 58, 16));
        _label_edges_type->setFont(font2);
        _label_edges_type->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_edges_color = new QLabel(tab_2);
        _label_edges_color->setObjectName(QString::fromUtf8("_label_edges_color"));
        _label_edges_color->setGeometry(QRect(20, 175, 58, 16));
        _label_edges_color->setFont(font2);
        _label_edges_color->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_vertex_disp_method = new QLabel(tab_2);
        _label_vertex_disp_method->setObjectName(QString::fromUtf8("_label_vertex_disp_method"));
        _label_vertex_disp_method->setGeometry(QRect(20, 315, 60, 30));
        _label_vertex_disp_method->setFont(font2);
        _label_vertex_disp_method->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_vertex_color = new QLabel(tab_2);
        _label_vertex_color->setObjectName(QString::fromUtf8("_label_vertex_color"));
        _label_vertex_color->setGeometry(QRect(20, 355, 40, 16));
        _label_vertex_color->setFont(font2);
        _label_vertex_color->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_project_type = new QLabel(tab_2);
        _label_project_type->setObjectName(QString::fromUtf8("_label_project_type"));
        _label_project_type->setGeometry(QRect(20, 445, 60, 30));
        _label_project_type->setFont(font2);
        _label_project_type->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_bg_color = new QLabel(tab_2);
        _label_bg_color->setObjectName(QString::fromUtf8("_label_bg_color"));
        _label_bg_color->setGeometry(QRect(20, 495, 75, 30));
        _label_bg_color->setFont(font2);
        _label_bg_color->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        comboBox = new QComboBox(tab_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 140, 81, 20));
        QFont font3;
        font3.setPointSize(12);
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color:rgb(100, 37, 118);\n"
"  color: rgb(255, 255, 255);\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"  width: 20px;\n"
"  background: transparent;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"  image: none;\n"
"}"));
        comboBox->setMinimumContentsLength(0);
        pushButton_edges_color = new QPushButton(tab_2);
        buttonGroupColors = new QButtonGroup(View);
        buttonGroupColors->setObjectName(QString::fromUtf8("buttonGroupColors"));
        buttonGroupColors->addButton(pushButton_edges_color);
        pushButton_edges_color->setObjectName(QString::fromUtf8("pushButton_edges_color"));
        pushButton_edges_color->setGeometry(QRect(100, 175, 18, 18));
        pushButton_edges_color->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 80, 180);\n"
"border-radius: 3px;\n"
"border: 1px solid rgb(210, 195, 250);\n"
""));
        comboBox_disp_method = new QComboBox(tab_2);
        comboBox_disp_method->addItem(QString());
        comboBox_disp_method->addItem(QString());
        comboBox_disp_method->addItem(QString());
        comboBox_disp_method->setObjectName(QString::fromUtf8("comboBox_disp_method"));
        comboBox_disp_method->setGeometry(QRect(100, 320, 81, 20));
        comboBox_disp_method->setFont(font3);
        comboBox_disp_method->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color: rgb(100, 37, 118);\n"
"  color: rgb(255, 255, 255);\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"  width: 20px;\n"
"  background: transparent;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"  image: none;\n"
"}"));
        comboBox_disp_method->setMinimumContentsLength(0);
        pushButton_vertex_color = new QPushButton(tab_2);
        buttonGroupColors->addButton(pushButton_vertex_color);
        pushButton_vertex_color->setObjectName(QString::fromUtf8("pushButton_vertex_color"));
        pushButton_vertex_color->setGeometry(QRect(100, 355, 18, 18));
        pushButton_vertex_color->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 3px;\n"
"border: 1px solid rgb(210, 195, 250);\n"
""));
        comboBox_disp_method_2 = new QComboBox(tab_2);
        comboBox_disp_method_2->addItem(QString());
        comboBox_disp_method_2->addItem(QString());
        comboBox_disp_method_2->setObjectName(QString::fromUtf8("comboBox_disp_method_2"));
        comboBox_disp_method_2->setGeometry(QRect(100, 450, 81, 20));
        comboBox_disp_method_2->setFont(font3);
        comboBox_disp_method_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color: rgb(100, 37, 118);\n"
"  color: rgb(255, 255, 255);\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"  width: 10px;\n"
"  background: transparent;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"  image: none;\n"
"}"));
        comboBox_disp_method_2->setMinimumContentsLength(0);
        pushButton_bg_color = new QPushButton(tab_2);
        buttonGroupColors->addButton(pushButton_bg_color);
        pushButton_bg_color->setObjectName(QString::fromUtf8("pushButton_bg_color"));
        pushButton_bg_color->setGeometry(QRect(100, 500, 18, 18));
        pushButton_bg_color->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"border-radius: 3px;\n"
"border: 1px solid rgb(210, 195, 250);"));
        _label_edges_thick = new QLabel(tab_2);
        _label_edges_thick->setObjectName(QString::fromUtf8("_label_edges_thick"));
        _label_edges_thick->setGeometry(QRect(20, 95, 80, 16));
        _label_edges_thick->setFont(font2);
        _label_edges_thick->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_vertex_size = new QLabel(tab_2);
        _label_vertex_size->setObjectName(QString::fromUtf8("_label_vertex_size"));
        _label_vertex_size->setGeometry(QRect(20, 270, 58, 16));
        _label_vertex_size->setFont(font2);
        _label_vertex_size->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;"));
        _label_bg1 = new QLabel(tab_2);
        _label_bg1->setObjectName(QString::fromUtf8("_label_bg1"));
        _label_bg1->setGeometry(QRect(10, 90, 185, 115));
        QFont font4;
        font4.setPointSize(14);
        _label_bg1->setFont(font4);
        _label_bg1->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"border: 1px;\n"
"border-radius: 8px;"));
        _label_bg2 = new QLabel(tab_2);
        _label_bg2->setObjectName(QString::fromUtf8("_label_bg2"));
        _label_bg2->setGeometry(QRect(10, 265, 185, 120));
        _label_bg2->setFont(font4);
        _label_bg2->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"border: 1px;\n"
"border-radius: 8px;"));
        _label_bg3 = new QLabel(tab_2);
        _label_bg3->setObjectName(QString::fromUtf8("_label_bg3"));
        _label_bg3->setGeometry(QRect(10, 440, 185, 95));
        _label_bg3->setFont(font4);
        _label_bg3->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"border: 1px;\n"
"border-radius: 8px;"));
        tabWidget->addTab(tab_2, QString());
        _label_bg3->raise();
        _label_bg2->raise();
        _label_bg1->raise();
        pushButton_settings2->raise();
        _pushButton_transformation2->raise();
        _label_edges->raise();
        _label_vertices->raise();
        _label_other->raise();
        horizontalSlider_edges_thick->raise();
        horizontalSlider_vert_size->raise();
        _label_edges_type->raise();
        _label_edges_color->raise();
        _label_vertex_disp_method->raise();
        _label_vertex_color->raise();
        _label_project_type->raise();
        _label_bg_color->raise();
        comboBox->raise();
        pushButton_edges_color->raise();
        comboBox_disp_method->raise();
        pushButton_vertex_color->raise();
        comboBox_disp_method_2->raise();
        pushButton_bg_color->raise();
        _label_edges_thick->raise();
        _label_vertex_size->raise();
        label_filename = new QLabel(centralwidget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(220, 650, 351, 20));
        label_filename->setFont(font);
        label_filename->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 32, 34);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);"));
        label_filename->setAlignment(Qt::AlignCenter);

        retranslateUi(View);

        tabWidget->setCurrentIndex(0);
        tabWidget_save_format->setCurrentIndex(0);
        comboBox->setCurrentIndex(0);
        comboBox_disp_method->setCurrentIndex(0);
        comboBox_disp_method_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QWidget *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "MainWindow", nullptr));
        _top_line->setText(QString());
        _pushButton_transformation1->setText(QCoreApplication::translate("View", "Transformation", nullptr));
        pushButton_settings1->setText(QCoreApplication::translate("View", "Settings", nullptr));
        _label_move->setText(QCoreApplication::translate("View", "Move", nullptr));
        _label_rotate->setText(QCoreApplication::translate("View", "Rotate", nullptr));
        _label_scale->setText(QCoreApplication::translate("View", "Scale", nullptr));
        _label_x_1->setText(QCoreApplication::translate("View", "x", nullptr));
        _label_x_2->setText(QCoreApplication::translate("View", "x", nullptr));
        _label_y_1->setText(QCoreApplication::translate("View", "y", nullptr));
        _label_y_2->setText(QCoreApplication::translate("View", "y", nullptr));
        _label_z_1->setText(QCoreApplication::translate("View", "z", nullptr));
        _label_z_2->setText(QCoreApplication::translate("View", "z", nullptr));
        label_file_info->setText(QString());
        saveAsButton->setText(QCoreApplication::translate("View", "Save as ..", nullptr));
        tabWidget_save_format->setTabText(tabWidget_save_format->indexOf(tab_3), QCoreApplication::translate("View", "Tab 1", nullptr));
        pushButton_bmp->setText(QCoreApplication::translate("View", "bmp", nullptr));
        pushButton_jpeg->setText(QCoreApplication::translate("View", "jpeg", nullptr));
        pushButton_gif->setText(QCoreApplication::translate("View", "gif", nullptr));
        tabWidget_save_format->setTabText(tabWidget_save_format->indexOf(tab_4), QCoreApplication::translate("View", "Tab 2", nullptr));
        pushButton_open_file->setText(QCoreApplication::translate("View", "OPEN OBJ FILE ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("View", "Tab 1", nullptr));
        pushButton_settings2->setText(QCoreApplication::translate("View", "Settings", nullptr));
        _pushButton_transformation2->setText(QCoreApplication::translate("View", "Transformation", nullptr));
        _label_edges->setText(QCoreApplication::translate("View", "Edges", nullptr));
        _label_vertices->setText(QCoreApplication::translate("View", "Vertices", nullptr));
        _label_other->setText(QCoreApplication::translate("View", "Other", nullptr));
        _label_edges_type->setText(QCoreApplication::translate("View", "Type", nullptr));
        _label_edges_color->setText(QCoreApplication::translate("View", "Color", nullptr));
        _label_vertex_disp_method->setText(QCoreApplication::translate("View", "Display\n"
"method", nullptr));
        _label_vertex_color->setText(QCoreApplication::translate("View", "Color", nullptr));
        _label_project_type->setText(QCoreApplication::translate("View", "Projection\n"
"type", nullptr));
        _label_bg_color->setText(QCoreApplication::translate("View", "Background\n"
"color", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("View", "Solid", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("View", "Dashed", nullptr));

        pushButton_edges_color->setText(QString());
        comboBox_disp_method->setItemText(0, QCoreApplication::translate("View", "Circle", nullptr));
        comboBox_disp_method->setItemText(1, QCoreApplication::translate("View", "Square", nullptr));
        comboBox_disp_method->setItemText(2, QCoreApplication::translate("View", "None", nullptr));

        pushButton_vertex_color->setText(QString());
        comboBox_disp_method_2->setItemText(0, QCoreApplication::translate("View", "Parallel", nullptr));
        comboBox_disp_method_2->setItemText(1, QCoreApplication::translate("View", "Central", nullptr));

        pushButton_bg_color->setText(QString());
        _label_edges_thick->setText(QCoreApplication::translate("View", "Thickness", nullptr));
        _label_vertex_size->setText(QCoreApplication::translate("View", "Size", nullptr));
        _label_bg1->setText(QString());
        _label_bg2->setText(QString());
        _label_bg3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("View", "Tab 2", nullptr));
        label_filename->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H

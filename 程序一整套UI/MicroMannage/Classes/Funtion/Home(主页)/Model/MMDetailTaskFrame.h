//
//  MMDetailTaskFrame.h
//  MicroMannage
//
//  Created by 倪望龙 on 2017/3/21.
//  Copyright © 2017年 xunyijia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMDetailTaskModel.h"
@interface MMDetailTaskFrame : NSObject
@property(nonatomic,assign)CGRect titleFrame;//标题
@property(nonatomic,assign)CGRect titleContentFrame;//任务内容
@property(nonatomic,assign)CGRect taskLineFrame;//分割线
@property(nonatomic,assign)CGRect headImageFrame;//用户头像
@property(nonatomic,assign)CGRect nameFrame;//用户名称
@property(nonatomic,assign)CGRect timeFrame;//回复时间
@property(nonatomic,assign)CGRect firstChatFrame;//最后回复的时间
@property(nonatomic,assign)CGRect chatContentFrame;//回复内容
@property(nonatomic,strong)NSArray* contentFrames;//回复内容内部视图
@property(nonatomic,assign)CGRect btnShowAllFrame;//显示所有
@property(nonatomic,assign)CGRect contentLineFrame;//聊天分割线
@property(nonatomic,assign)CGRect btnChartFrame;//评论
@property(nonatomic,assign)CGRect btnCompleteFrame;//完成
@property(nonatomic,assign)CGRect cellLineFrame;

@property(nonatomic,assign)CGFloat cellHeight;
@property(nonatomic,assign,getter = isShowAll)BOOL showAll;

@property(nonatomic,strong)MMDetailTaskModel *viewModel;
@end

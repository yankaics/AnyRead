//
//  ViewController.h
//  CDSideBar
//
//  Created by Christophe Dellac on 9/11/14.
//  Copyright (c) 2014 Christophe Dellac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDSideBarController.h"

@interface ViewController : UIViewController <CDSideBarControllerDelegate>
{
    CDSideBarController *sideBar;
}

@end


// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
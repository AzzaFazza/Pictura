//
//  ViewController.h
//  Pictura
//
//  Created by Adam on 25/09/2013.
//  Copyright (c) 2013 dot.ly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *contentTable;
@property (strong, nonatomic) IBOutlet UITabBar *boardPickerTab;
@property (strong, nonatomic) IBOutlet UINavigationBar *navBar;
@property (strong, nonatomic) IBOutlet UILabel *boardLabel;
@end

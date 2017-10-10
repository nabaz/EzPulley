//
//  SecondViewController.h
//  EzPulley
//
//  Created by Nabaz Maaruf on 1/6/14.
//  Copyright (c) 2017 XCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tblFiles;

@end

//
//  FirstViewController.h
//  EzPulley
//
//  Created by Nabaz Maaruf on 1/6/14.
//  Copyright (c) 2017 XCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtMessage;
@property (weak, nonatomic) IBOutlet UITextView *tvChat;


- (IBAction)sendMessage:(id)sender;
- (IBAction)cancelMessage:(id)sender;


@end

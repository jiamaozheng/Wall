//
//  LoginViewController.h
//  Wall
//
//  Created by jiamao zheng on 4/6/15.
//  Copyright (c) 2015 Jiamao Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>
#import "RegisterViewController.h"

@interface LoginViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITextField *userTextField;
@property (nonatomic, strong) IBOutlet UITextField *passwordTextField;


-(IBAction)logInPressed:(id)sender;
@end

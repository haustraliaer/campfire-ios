//
//  ViewController.h
//  Firechat
//
//  Copyright (c) 2012 Firebase.
//
//  No part of this project may be copied, modified, propagated, or distributed
//  except according to terms in the accompanying LICENSE file.
//

#import <UIKit/UIKit.h>
#import <Firebase/Firebase.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSMutableArray* chat;

@property (nonatomic, strong) Firebase* firebase;
@property (nonatomic, strong) Firebase* users;
@property (nonatomic, strong) Firebase* messages;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIButton *nameField;

@end

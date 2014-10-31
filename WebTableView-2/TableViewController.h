//
//  TableViewController.h
//  WebTableView-2
//
//  Created by Anthony Dagati on 10/31/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFNetworking.h"


@interface TableViewController : UITableViewController <UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *myTableView;


@property (strong, nonatomic) NSArray *googlePlacesArrayFromAFNetworking;
@property (strong, nonatomic) NSArray *finishedGooglePlacesArray;

@end

//
//  pinMapsDropTest.h
//  PinMaps
//
//  Created by Presley on 20/12/14.
//  Copyright (c) 2014 SlaaySourceCoders. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface pinMapsDropTest : UIViewController<MKMapViewDelegate>

- (IBAction)btnDropPin:(id)sender;
- (IBAction)btnZoom:(id)sender;
- (IBAction)btnChangeMap:(id)sender;


@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
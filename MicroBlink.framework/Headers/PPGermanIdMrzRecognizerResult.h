//
//  PPGermanIdMrzRecognizerResult.h
//  BlinkIdFramework
//
//  Created by Dino on 22/08/16.
//  Copyright © 2016 MicroBlink Ltd. All rights reserved.
//

#import "PPMrtdRecognizerResult.h"

/**
 * Class representing values obtained when scanning MRZ of German ID
 */
PP_CLASS_AVAILABLE_IOS(6.0) @interface PPGermanIdMrzRecognizerResult : PPMrtdRecognizerResult

/**
 * Returns the eye color of the German ID owner.
 * @return the eye color of the German ID owner.
 */
- (NSString * _Nullable)eyeColor;

/**
 * Returns the height of the German ID owner.
 * @return the height of the German ID owner.
 */
- (NSString * _Nullable)height;

/**
 * Returns the date of issue of the ID.
 * @return the date of issue of the ID.
 */
- (NSString * _Nullable)dateOfIssue;

/**
 * Returns the issuing authority of the German ID.
 * @return the issuing authority of the German ID.
 */
- (NSString * _Nullable)authority;

/**
 * Returns the address of the German ID owner.
 * @return the address of the German ID owner.
 */
- (NSString * _Nullable)address;

@end

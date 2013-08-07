//
//  FLOperationQueue.h
//  FishLampCocoa
//
//  Created by Mike Fullerton on 4/20/13.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import "FLOperation.h"

@class FLOrderedCollection;

@interface FLOperationQueue : NSObject<NSFastEnumeration> {
@private
    FLOrderedCollection* _operations;
}

@property (readonly, strong) id firstOperation;
@property (readonly, strong) id lastOperation; 
@property (readonly, assign) NSUInteger count;

- (void) queueOperation:(FLOperation*) operation;

- (void) addOperationWithTarget:(id) target action:(SEL) action; // @selector(callback:) parameter is the operation

- (void) addOperationsWithArray:(NSArray*) operations;

- (id) operationForIdentifier:(id) identifier;

- (id) operationAtIndex:(NSUInteger) index;

- (void) removeOperationForIdentifier:(id) identifier;

- (void) removeOperation:(FLOperation*) operation;

- (void) removeAllOperations;

- (id) removeFirstOperation;

- (id) removeLastOperation;

- (void) requestCancel;

@end

// TODO:

//- (void) insertOperation:(FLSynchronousOperation*) newOperation
//          afterOperation:(FLSynchronousOperation*) afterOperation;




/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMStreetViewReportRequest : PBRequest 
{
    NSMutableArray *_panoramaVisiteds;
}

@property(readonly) NSInteger panoramaVisitedsCount;
@property(retain) NSMutableArray *panoramaVisiteds; /* unknown property attribute: V_panoramaVisiteds */


- (id)init;
- (void)dealloc;
- (NSInteger)panoramaVisitedsCount;
- (void)setPanoramaVisited:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)panoramaVisitedAtIndex:(NSUInteger)arg1;
- (void)addPanoramaVisited:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (id)panoramaVisiteds;
- (void)setPanoramaVisiteds:(id)arg1;

@end

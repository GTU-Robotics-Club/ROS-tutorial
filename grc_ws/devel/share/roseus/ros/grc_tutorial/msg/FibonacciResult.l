;; Auto-generated. Do not edit!


(when (boundp 'grc_tutorial::FibonacciResult)
  (if (not (find-package "GRC_TUTORIAL"))
    (make-package "GRC_TUTORIAL"))
  (shadow 'FibonacciResult (find-package "GRC_TUTORIAL")))
(unless (find-package "GRC_TUTORIAL::FIBONACCIRESULT")
  (make-package "GRC_TUTORIAL::FIBONACCIRESULT"))

(in-package "ROS")
;;//! \htmlinclude FibonacciResult.msg.html


(defclass grc_tutorial::FibonacciResult
  :super ros::object
  :slots (_sequence ))

(defmethod grc_tutorial::FibonacciResult
  (:init
   (&key
    ((:sequence __sequence) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _sequence __sequence)
   self)
  (:sequence
   (&optional __sequence)
   (if __sequence (setq _sequence __sequence)) _sequence)
  (:serialization-length
   ()
   (+
    ;; int32[] _sequence
    (* 4    (length _sequence)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[] _sequence
     (write-long (length _sequence) s)
     (dotimes (i (length _sequence))
       (write-long (elt _sequence i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32[] _sequence
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _sequence (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _sequence i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get grc_tutorial::FibonacciResult :md5sum-) "b81e37d2a31925a0e8ae261a8699cb79")
(setf (get grc_tutorial::FibonacciResult :datatype-) "grc_tutorial/FibonacciResult")
(setf (get grc_tutorial::FibonacciResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result
int32[] sequence


")



(provide :grc_tutorial/FibonacciResult "b81e37d2a31925a0e8ae261a8699cb79")

